/* Module: InstMsi-x86w.exe
   Function: FUN_01006d40
   Address: 01006d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01006d40(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(code *)param_1[7])(param_1[0x22],0,1);
  if (iVar2 == -1) {
    FUN_01007480((undefined4 *)*param_1,4,0);
    return 0;
  }
  piVar1 = param_1 + 0x1ef;
  *(undefined2 *)((int)param_1 + 0x7de) = *(undefined2 *)(param_1 + 0x2b);
  *(undefined2 *)((int)param_1 + 0x7da) = *(undefined2 *)(param_1 + 0x1c);
  *piVar1 = iVar2;
  param_1[499] = param_1[0xe];
  iVar3 = (*(code *)param_1[9])(5,piVar1);
  if (iVar3 == -1) {
    FUN_01007480((undefined4 *)*param_1,0xb,0);
    return 0;
  }
  *(short *)(param_1 + 0x2b) = *(short *)((int)param_1 + 0x7de);
  if ((*(short *)((int)param_1 + 0x7de) != 0) && (*piVar1 != iVar2)) {
    iVar2 = (*(code *)param_1[7])(param_1[0x22],*piVar1,0);
    if (iVar2 == -1) {
      FUN_01007480((undefined4 *)*param_1,0xb,0);
      return 0;
    }
  }
  return 1;
}


