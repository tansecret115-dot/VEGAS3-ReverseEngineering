/* Module: vegas30.exe
   Function: FUN_005f6aa0
   Address: 005f6aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_005f6aa0(int param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *local_4;
  
  local_4 = *(int **)(param_1 + 0x60);
  if (local_4 != (int *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    hMem = GlobalAlloc(0x40,0x28);
    pvVar1 = GlobalLock(hMem);
    if (pvVar1 != (LPVOID)0x0) {
      puVar2 = (undefined4 *)FUN_0058f810(param_1);
      goto LAB_005f6afc;
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_005f6afc:
  iVar3 = -0x7fffbffc;
  if ((-1 < DAT_00647754) &&
     (iVar3 = _SfAudioPeak_CreateInstance_28
                        (&local_4,puVar2,*(int *)(param_1 + 8) + 0x170,0,DAT_00647754,DAT_00647758,1
                        ), -1 < iVar3)) {
    iVar3 = FUN_004e6c90(0x38);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x5c) = iVar3;
      *(undefined1 **)(iVar3 + 0x20) = &LAB_005f7f90;
      *(code **)(iVar3 + 0x28) = FUN_005f8170;
      *(int **)(iVar3 + 0x34) = local_4;
      *(int *)(iVar3 + 0x30) = param_1;
      iVar4 = FUN_005ec620();
      if (iVar4 != 0) {
        FUN_005ed3f0(*(undefined4 *)(param_1 + 8));
      }
      iVar3 = FUN_004e7190(iVar3);
      if ((iVar3 < 0) && (iVar4 != 0)) {
        FUN_005ed410(*(undefined4 *)(param_1 + 8),0,0);
      }
      return iVar3;
    }
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*local_4 + 8))(local_4);
    *(undefined4 *)(param_1 + 0x58) = 1;
    return -0x7ff8fff2;
  }
  *(undefined4 *)(param_1 + 0x58) = 1;
  return iVar3;
}


