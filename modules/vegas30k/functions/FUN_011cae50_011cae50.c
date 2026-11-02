/* Module: vegas30k.dll
   Function: FUN_011cae50
   Address: 011cae50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011cae50(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x16) & 1) == 0) {
    return 0;
  }
  do {
    WaitForSingleObject((HANDLE)param_1[0xb6],0xffffffff);
    ResetEvent((HANDLE)param_1[0xb6]);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
    iVar4 = param_1[0xb9];
    while (iVar4 == 0x3c0) {
      iVar4 = *(int *)(param_1[0xba] + param_1[0x2c] * 4);
      uVar1 = *(uint *)(iVar4 + 0x10);
      if ((uVar1 & 1) == 0) break;
      *(uint *)(iVar4 + 0x10) = uVar1 & 0xfffffffe;
      if ((param_1[0x88] != 0) || (param_1[0x89] != 0x3ff00000)) {
        FUN_011ca920(*(undefined4 *)(param_1[0xba] + param_1[0x2c] * 4));
      }
      param_1[0x2e] = param_1[0x2e] + -1;
      if ((param_1[0x14] != 0) && ((*(byte *)(param_1 + 0x16) & 2) != 0)) {
        FUN_011ca530();
        puVar2 = *(undefined4 **)(param_1[0xba] + param_1[0x2c] * 4);
        FUN_011ca560(0,*puVar2,(uint)puVar2[2] / (uint)*(ushort *)(param_1[0x24] + 0xc));
        if ((code *)param_1[0x2a] != (code *)0x0) {
          puVar2 = *(undefined4 **)(param_1[0xba] + param_1[0x2c] * 4);
          uVar3 = *puVar2;
          (*(code *)param_1[0x2a])
                    (uVar3,uVar3,
                     ((uint)puVar2[2] / (uint)*(ushort *)(param_1[0x24] + 0xc)) *
                     (uint)*(ushort *)(param_1[0x24] + 2),0x3f800000);
        }
        puVar2 = *(undefined4 **)(param_1[0xba] + param_1[0x2c] * 4);
        iVar4 = (*(code *)param_1[0x14])
                          (param_1,0x3c0,param_1[0x15],param_1[0x2c],*puVar2,
                           (uint)puVar2[2] / (uint)*(ushort *)(param_1[0x24] + 0xc));
        if (iVar4 == 2) {
          puVar2 = *(undefined4 **)(param_1[0xba] + param_1[0x2c] * 4);
          (**(code **)(*param_1 + 100))
                    (param_1,*puVar2,(uint)puVar2[1] / (uint)*(ushort *)(param_1[0x24] + 0xc));
        }
      }
      if (param_1[0x2e] == 0) {
        SetEvent((HANDLE)param_1[0x2f]);
      }
      iVar4 = param_1[0x2c];
      param_1[0x2c] = iVar4 + 1U;
      if ((uint)param_1[0x2d] <= iVar4 + 1U) {
        param_1[0x2c] = 0;
      }
      iVar4 = param_1[0xb9];
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
    if ((*(byte *)(param_1 + 0x16) & 1) == 0) {
      return 0;
    }
  } while( true );
}


