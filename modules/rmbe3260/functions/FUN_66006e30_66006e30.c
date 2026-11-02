/* Module: rmbe3260.dll
   Function: FUN_66006e30
   Address: 66006e30
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall
FUN_66006e30(void *this,ulong param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            char *param_5,undefined4 param_6)

{
  CPNPropertyPage::CPNPropertyPage(this,param_1,param_2);
  FUN_6605b650((undefined4 *)((int)this + 0x1d8));
  *(ulong *)((int)this + 0xb8) = param_1;
  *(undefined4 *)((int)this + 0x104) = param_3;
  *(undefined ***)this = &PTR_FUN_660636f8;
  *(undefined4 *)((int)this + 0x108) = param_4;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  FUN_6605b970((undefined4 *)((int)this + 0x1d8),param_5);
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = param_6;
  return this;
}


