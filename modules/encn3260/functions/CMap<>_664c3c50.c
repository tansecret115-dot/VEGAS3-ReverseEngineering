/* Module: encn3260.dll
   Function: CMap<>
   Address: 664c3c50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CMap<int,int,int,int>::CMap<int,int,int,int>(int)
    public: __thiscall CMap<int,int,unsigned int,unsigned int>::CMap<int,int,unsigned int,unsigned
   int>(int)
    public: __thiscall CMap<unsigned int,unsigned int &,class CMFCToolBarButton *,class
   CMFCToolBarButton * &>::CMap<unsigned int,unsigned int &,class CMFCToolBarButton *,class
   CMFCToolBarButton * &>(int)
    public: __thiscall CMap<unsigned int,unsigned int,int,int>::CMap<unsigned int,unsigned
   int,int,int>(int)
     34 names - too many to list
   
   Library: Visual Studio 2010 Release */

void __thiscall CMap<>(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined ***)this = &PTR_FUN_664df990;
  *(undefined4 *)((int)this + 8) = 0x11;
  *(undefined4 *)((int)this + 0x18) = param_1;
  return;
}


