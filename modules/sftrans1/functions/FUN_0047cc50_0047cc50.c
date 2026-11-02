/* Module: sftrans1.dll
   Function: FUN_0047cc50
   Address: 0047cc50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0047cc50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  LRESULT LVar1;
  int *piVar2;
  
  if (((param_4 != (undefined4 *)0x0) && (param_4[2] == -0x227)) && (*(int *)(param_1 + 0x410) != 0)
     ) {
    LVar1 = SendMessageA((HWND)*param_4,0x130b,0,0);
    FUN_00486140(LVar1);
    piVar2 = (int *)FUN_00485e60(LVar1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
  }
  return 0;
}


