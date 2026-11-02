/* Module: vegas30k.dll
   Function: FUN_0118a350
   Address: 0118a350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0118a350(int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_EBP;
  int *unaff_EDI;
  undefined4 uVar7;
  int **ppiVar8;
  int *piStack_14;
  int *piStack_10;
  int iStack_c;
  int *apiStack_8 [2];
  
  uVar7 = 0;
  piVar3 = *(int **)(param_1 + 0xb0);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  pvVar1 = GlobalAlloc(0x40,0x18);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_011a2f70();
  }
  *(int **)(param_1 + 0xb0) = piVar3;
  (**(code **)(*piVar3 + 4))(piVar3);
  uVar4 = FUN_011a2ff0();
  if (*(int *)(param_1 + 200) == 0) {
    pvVar1 = GlobalAlloc(0x40,0xe18);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_011921a0(param_1);
    }
    *(int **)(param_1 + 200) = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  piVar3 = *(int **)(param_1 + 0x1f0);
  if (piVar3 != (int *)0x0) {
    ppiVar8 = &piStack_14;
    piStack_14 = (int *)0x0;
    (**(code **)(*piVar3 + 0x194))(piVar3,ppiVar8);
    (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))(*(int **)(param_1 + 0xb0),unaff_EBP);
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    (**(code **)(**(int **)(param_1 + 0x1f0) + 0x1a0))(*(int **)(param_1 + 0x1f0),&stack0xffffffdc);
    (**(code **)(**(int **)(param_1 + 0x1f0) + 0x1b0))(*(int **)(param_1 + 0x1f0),ppiVar8);
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 8))(piStack_10);
    }
  }
  if (*(int *)(param_1 + 0xb4) == 0) {
    pvVar1 = GlobalAlloc(0x40,0x1198);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_0118f710(param_1);
    }
    *(undefined4 *)(param_1 + 0xb4) = uVar5;
    FUN_0118f940();
  }
  iStack_c = 0;
  FUN_0118f9b0(&iStack_c);
  if (iStack_c != 0) {
    (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))(*(int **)(param_1 + 0xb0),iStack_c);
    (**(code **)(*piStack_14 + 8))(piStack_14);
  }
  FUN_0118fa20(apiStack_8);
  if (apiStack_8[0] != (int *)0x0) {
    pvVar1 = GlobalAlloc(0x40,0x10);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 != (LPVOID)0x0) {
      uVar7 = FUN_011a2c80(param_1);
    }
    FUN_011a2cd0(1);
    (**(code **)(*apiStack_8[0] + 0xc))(apiStack_8[0],uVar7);
    (**(code **)(*piStack_10 + 8))(piStack_10);
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    pvVar1 = GlobalAlloc(0x40,0xa0);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0118e770(param_1);
    }
    *(int *)(param_1 + 0xb8) = iVar6;
    if (iVar6 != 0) {
      FUN_0118e850();
    }
  }
  if (*(int *)(param_1 + 0xbc) == 0) {
    pvVar1 = GlobalAlloc(0x40,0xd0);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0118da70(param_1);
    }
    *(int *)(param_1 + 0xbc) = iVar6;
    if (iVar6 != 0) {
      FUN_0118db70();
    }
  }
  return uVar4;
}


