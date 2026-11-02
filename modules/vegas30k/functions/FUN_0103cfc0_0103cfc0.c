/* Module: vegas30k.dll
   Function: FUN_0103cfc0
   Address: 0103cfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0103cfc0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar3;
  int *piVar4;
  undefined4 *local_1c;
  int *apiStack_8 [2];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x144));
  iVar1 = (**(code **)*param_2)();
  piVar3 = param_2;
  if (iVar1 != 0) {
    piVar3 = *(int **)(param_1 + 900);
    (**(code **)(*piVar3 + 0x1c))(piVar3,apiStack_8,0);
    piVar4 = &DAT_011d9c40;
    (**(code **)*local_1c)(local_1c,&DAT_011d9c40,&stack0xffffffc4);
    (**(code **)(*piVar3 + 0x50))(piVar3,param_2);
    (**(code **)(*piVar4 + 8))(piVar4);
    piVar3 = apiStack_8[0];
  }
  if (*(int *)(param_1 + 0x3ac) != 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    uVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3);
    iVar1 = (**(code **)(*piVar3 + 0x3c))(piVar3);
    if (iVar1 == 0) {
      (**(code **)(*piVar3 + 0x44))(piVar3,&stack0xffffffdc,&stack0xffffffd4);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(uint)(iVar1 == 0);
    (**(code **)(param_1 + 0x3ac))(param_1,3,*(undefined4 *)(param_1 + 0x3b0),piVar3,param_2,uVar2);
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  (**(code **)(*piVar3 + 8))();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x144));
  return;
}


