#ifndef __WOW_HPP__
#define __WOW_HPP__

namespace wow {
  #include "wow.h"

  using Spinner = spinner_t;
  using Name = name_t;

  Spinner * SpinnerGet(Name name) {
    return spin_get(name);
  }

  void SpinnerClean(Spinner * spinner) {
    spinner_clean(spinner);
  }

  class Wow {
    wow_t * wow;
    public:
      Wow(Spinner * s,
        const char * text) {
        this -> wow = wow_init(s, const_cast < char * > (text));
      }

    void Persist() {
      wow_persist(this -> wow);
    }

    void PersistWith(Spinner * s,
      const char * text) {
      wow_persist_with(this -> wow, s, const_cast < char * > (text));
    }

    void spinner(Spinner * s) {
      wow_spinner(this -> wow, s);
    }

    void Start() {
      wow_start(this -> wow);
    }

    void Stop() {
      wow_stop(this -> wow);
    }

    void Text(const char * text) {
        wow_text(this -> wow, const_cast < char * > (text));
      }

      ~Wow() {
        wow_clean(this -> wow);
      }
  };
}

#endif // __WOW_HPP__
