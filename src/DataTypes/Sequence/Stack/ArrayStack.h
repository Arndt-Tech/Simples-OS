#pragma once
#include "SimpleOS/Macros.h"
#include "DataTypes/Typedefs.h"
#include "DataTypes/Object/Object.h"
#include "DataTypes/Sequence/SimpleContainer.h"
#include "DataTypes/Sequence/ContainerStruct/ArrayContainer.h"

namespace SimpleOS
{
  namespace Data
  {
    template <typename T>
    class ArrayStack extends ArrayContainer<T> ,  SimpleContainer<T>
    {
    public:
      ~ArrayStack() { this->cDelete(); }

    public:
      // Capacity
      bool isEmpty() const override { return this->cIsEmpty(); }

      unsigned long Size() const override { return this->cSize(); }

      // Element Acess
      T First() const override { return this->cGet(0x00); }

      T Last() const override { return this->cGet(this->cSize() - 1); }

      T Error() const override { return this->cError(); }

      // Modifiers
      T Push(T value) override { return this->cPushBack(value); }

      T Pop() override { return this->cPopBack(); }

      // Operations
      void Reset() override { this->cReset(); }

      void Delete() override { this->cDelete(); }
    };
  }
}