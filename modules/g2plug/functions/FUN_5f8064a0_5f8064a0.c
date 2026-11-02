/* Module: g2plug.dll
   Function: FUN_5f8064a0
   Address: 5f8064a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5f8064a0(void *this,LPCSTR param_1,undefined4 param_2,int *param_3,int *param_4)

{
  *(undefined4 *)((int)this + 8) = param_2;
  *(int **)((int)this + 0xc) = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  *(int **)((int)this + 0x10) = param_4;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(param_4);
  }
  lstrcpynA((LPSTR)((int)this + 0x30),param_1,0x104);
  *(undefined1 *)((int)this + 0x133) = 0;
  return 0;
}


