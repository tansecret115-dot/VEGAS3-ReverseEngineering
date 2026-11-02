/* Module: vegas30.exe
   Function: FUN_0047edd0
   Address: 0047edd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047edd0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  
  iVar1 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20);
  if (0 < iVar1) {
    iVar3 = iVar1 >> 0x1f;
    dVar5 = (double)*(longlong *)(param_1 + 0x38) * (double)param_2;
    uVar4 = __alldiv(iVar1,iVar3,2,0);
    uVar2 = ftol(uVar4,iVar1,iVar3,dVar5);
    return uVar2;
  }
  return 0;
}


