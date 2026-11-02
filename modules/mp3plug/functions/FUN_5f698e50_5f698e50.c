/* Module: mp3plug.dll
   Function: FUN_5f698e50
   Address: 5f698e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f698e50(int *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int unaff_retaddr;
  
  if ((param_1[0x1f] != 0) && (param_1[9] != 0)) {
    FUN_5f697b30(param_1[9]);
    param_1[0x1f] = 0;
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  if (param_1[0x6f] != 0) {
    (**(code **)(*param_1 + 0x34))(param_1,&stack0x00000000);
    iVar3 = 0;
    if (0 < unaff_retaddr) {
      iVar5 = 0;
      do {
        piVar1 = *(int **)(iVar5 + 0x1c + param_1[0x6f]);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x14))(piVar1);
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x20;
      } while (iVar3 < unaff_retaddr);
    }
  }
  pcVar4 = GlobalFree_exref;
  if ((int *)param_1[9] != (int *)0x0) {
    FUN_5f697710((int *)param_1[9]);
    pcVar4 = GlobalFree_exref;
    piVar1 = (int *)param_1[9];
    if (piVar1 == (int *)0x0) {
      param_1[9] = 0;
    }
    else {
      FUN_5f6972e0(piVar1);
      pvVar2 = GlobalHandle(piVar1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(piVar1);
      pcVar4 = GlobalFree_exref;
      GlobalFree(pvVar2);
      param_1[9] = 0;
    }
  }
  if ((LPCVOID)param_1[6] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[6]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[6]);
    (*pcVar4)(pvVar2);
    param_1[6] = 0;
  }
  if ((char)param_1[0x23] != '\0') {
    DeleteFileA((LPCSTR)(param_1 + 0x23));
    *(undefined1 *)(param_1 + 0x23) = 0;
  }
  if ((LPCVOID)param_1[0x1c] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x1c]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x1c]);
    (*pcVar4)(pvVar2);
    param_1[0x1c] = 0;
  }
  if ((LPCVOID)param_1[0x1e] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x1e]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x1e]);
    (*pcVar4)(pvVar2);
    param_1[0x1e] = 0;
  }
  if ((LPCVOID)param_1[0x1d] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x1d]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x1d]);
    (*pcVar4)(pvVar2);
    param_1[0x1d] = 0;
  }
  if (param_1[2] != 0) {
    param_1[2] = 0;
  }
  return 0;
}


