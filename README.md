# wow-cpp

[![](https://img.shields.io/github/v/tag/thechampagne/wow-hpp?label=version)](https://github.com/thechampagne/wow-hpp/releases/latest) [![](https://img.shields.io/github/license/thechampagne/wow-hpp)](https://github.com/thechampagne/wow-hpp/blob/main/LICENSE)

C++ binding for **wow-cgo**.

### API

```cpp
namespace wow {

  using Spinner = spinner_t;
  using Name = name_t;

  Spinner * SpinnerGet(Name name);

  void SpinnerClean(Spinner * spinner);

  class Wow {
  
    Wow(Spinner * s, const char * text);

    void Persist();

    void PersistWith(Spinner * s, const char * text);

    void spinner(Spinner * s);

    void Start();

    void Stop();

    void Text(const char * text);

    ~Wow();
  };
}
```

### References
 - [wow-cgo](https://github.com/thechampagne/wow-cgo)

### License

This repo is released under the [MIT](https://github.com/thechampagne/wow-hpp/blob/main/LICENSE).
