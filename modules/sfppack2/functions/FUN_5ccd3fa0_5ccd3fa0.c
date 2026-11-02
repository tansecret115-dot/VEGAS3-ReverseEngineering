/* Module: sfppack2.dll
   Function: FUN_5ccd3fa0
   Address: 5ccd3fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccd3fa0(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *puVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(lpCriticalSection);
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  for (iVar1 = 0x97; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x278) = 1;
  *(undefined4 *)(param_1 + 0x27c) = 1;
  *(undefined4 *)(param_1 + 0x280) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x20) < -0x1e0) {
    *(undefined4 *)(param_1 + 0x20) = 0xfffffe20;
  }
  else if (0xf0 < *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 0xf0;
  }
  if (*(int *)(param_1 + 0x24) < -0x1e0) {
    *(undefined4 *)(param_1 + 0x24) = 0xfffffe20;
  }
  else if (0xf0 < *(int *)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 0xf0;
  }
  if (*(int *)(param_1 + 0x28) < -0x1e0) {
    *(undefined4 *)(param_1 + 0x28) = 0xfffffe20;
  }
  else if (0xf0 < *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x28) = 0xf0;
  }
  FUN_5ccd40d0(param_1);
  FUN_5ccd4100(param_1);
  FUN_5ccd4130(param_1);
  FUN_5ccd4160(param_1);
  FUN_5ccd4190(param_1);
  FUN_5ccd41c0(param_1);
  FUN_5ccd41f0(param_1);
  FUN_5ccd4220(param_1);
  FUN_5ccd4250(param_1);
  FUN_5ccd4280(param_1);
  FUN_5ccd42b0(param_1);
  FUN_5ccd42e0(param_1);
  FUN_5ccd4310(param_1);
  FUN_5ccd4340(param_1);
  FUN_5ccd4370(param_1);
  FUN_5ccd43a0(param_1);
  FUN_5ccd43d0(param_1);
  FUN_5ccd4400();
  FUN_5ccd4410(param_1);
  FUN_5ccd4440(param_1);
  FUN_5ccd4480(param_1);
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


