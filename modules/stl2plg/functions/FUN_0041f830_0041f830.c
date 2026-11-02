/* Module: stl2plg.dll
   Function: FUN_0041f830
   Address: 0041f830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f830(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_20 [8];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  piVar1 = (int *)param_1[0x12];
  iVar2 = *piVar1;
  piVar4 = param_1;
  if (0 < iVar2) {
LAB_0041f85f:
    iVar2 = iVar2 + -1;
    piVar4 = (int *)(piVar1[1] * iVar2 + piVar1[2]);
    if (piVar4[1] != param_2[1]) goto code_r0x0041f86c;
    piVar5 = local_20;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    FUN_004164c0(piVar1,iVar2,1,0);
    piVar4 = local_20;
  }
LAB_0041f89c:
  if (param_1[0x14] < param_1[0x15]) {
    param_1[0x15] = param_1[0x15] + -1;
  }
  else {
    *piVar4 = *param_2;
    piVar4[3] = param_2[3];
    piVar4[4] = param_2[4];
    piVar4[6] = param_2[6];
    piVar4[7] = param_2[7];
    piVar4[5] = param_2[5];
    iVar2 = FUN_004161d0((int *)param_1[0x11],-1,piVar4,1);
    if (-1 < iVar2) goto LAB_0041f8eb;
  }
  VirtualFree((LPVOID)piVar4[1],0,0x8000);
LAB_0041f8eb:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  return;
code_r0x0041f86c:
  piVar4 = (int *)0x0;
  if (iVar2 < 1) goto LAB_0041f89c;
  goto LAB_0041f85f;
}


