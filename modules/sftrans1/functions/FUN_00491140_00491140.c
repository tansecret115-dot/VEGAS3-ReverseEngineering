/* Module: sftrans1.dll
   Function: FUN_00491140
   Address: 00491140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00491140(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  LRESULT LVar1;
  
  if (((param_4 != (undefined4 *)0x0) && (param_4[2] == -0x227)) && (*(int *)(param_1 + 0x340) != 0)
     ) {
    LVar1 = SendMessageA((HWND)*param_4,0x130b,0,0);
    FUN_00486140(LVar1);
  }
  return 0;
}


