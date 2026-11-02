/* Module: encn3260.dll
   Function: FUN_664d9e40
   Address: 664d9e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d9e40(void *this,int param_1)

{
  switch(*(undefined1 *)(param_1 + 3)) {
  case 200:
  case 0xc9:
    *(int *)this = param_1;
    return 0;
  case 0xca:
    *(int *)((int)this + 4) = param_1;
    return 0;
  case 0xcb:
    *(int *)((int)this + 8) = param_1;
    return 0;
  case 0xcc:
    *(int *)((int)this + 0xc) = param_1;
    return 0;
  default:
    return 0x80004005;
  }
}


