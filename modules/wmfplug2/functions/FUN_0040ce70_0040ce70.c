/* Module: wmfplug2.dll
   Function: FUN_0040ce70
   Address: 0040ce70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040ce70(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *unaff_ESI;
  
  iVar2 = param_1;
  piVar1 = (int *)(param_1 + 0x228);
  if (*(int *)(param_1 + 0x228) == 0) {
    FUN_0042c080(piVar1,4,-1,-1,0);
    if (*piVar1 == 0) {
      return 0x8007000e;
    }
  }
  piVar3 = param_2;
  iVar4 = (**(code **)*param_2)(param_2,&DAT_0047ac10,&param_1);
  if (iVar4 < 0) {
    *(undefined4 *)(iVar2 + 0x250) = 1;
  }
  else {
    *(undefined4 *)(iVar2 + 0x24c) = 1;
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  (**(code **)(*piVar3 + 4))(piVar3);
  iVar4 = FUN_0042aa50((int *)*piVar1,-1,(int *)&stack0xfffffff8,1);
  if (-1 < iVar4) {
    *(int *)(iVar2 + 0x224) = *(int *)(iVar2 + 0x224) + 1;
  }
  return 0;
}


