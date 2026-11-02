/* Module: vidcap30.exe
   Function: FUN_0046c7a0
   Address: 0046c7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046c7a0(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 != (uint *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
    uVar2 = 0;
    uVar3 = 0;
    iVar5 = *(int *)param_1[0x2e];
    if (iVar5 != 0) {
      piVar4 = (int *)((int *)param_1[0x2e])[2];
      do {
        uVar1 = *(uint *)*piVar4;
        bVar6 = CARRY4(uVar2,uVar1);
        uVar2 = uVar2 + uVar1;
        uVar3 = uVar3 + ((uint *)*piVar4)[1] + (uint)bVar6;
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *param_2 = uVar2;
    param_2[1] = uVar3;
    (**(code **)(*param_1 + 0x34))(param_1,param_2,param_1 + 0x5a,uVar2,uVar3,&DAT_005a2498);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
    return 0;
  }
  return 0x80004003;
}


