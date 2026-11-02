/* Module: vegas30k.dll
   Function: FUN_011c8000
   Address: 011c8000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011c8000(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  piVar1 = *(int **)(param_1 + 0x29c);
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,&local_4);
    if (iVar2 == 0) {
      return local_4;
    }
  }
  uVar3 = _SfGetMillisec_0();
  return uVar3;
}


