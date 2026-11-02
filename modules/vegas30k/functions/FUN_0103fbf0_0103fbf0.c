/* Module: vegas30k.dll
   Function: FUN_0103fbf0
   Address: 0103fbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0103fbf0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x39c);
  if (iVar3 == 0) {
    *(int *)(param_1 + 0x3b4) = param_2;
    return 0;
  }
  do {
    piVar1 = (int *)FUN_011376b0();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x48))(), param_2 != iVar2)) {
      (**(code **)(*piVar1 + 0x44))(param_2);
    }
    iVar3 = *(int *)(iVar3 + 0x224);
  } while (iVar3 != 0);
  *(int *)(param_1 + 0x3b4) = param_2;
  return 0;
}


