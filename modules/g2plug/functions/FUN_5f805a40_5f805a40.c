/* Module: g2plug.dll
   Function: FUN_5f805a40
   Address: 5f805a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f805a40(int param_1,int param_2,LPCWSTR param_3)

{
  LPSTR lpMultiByteStr;
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  if (*param_3 != L'\0') {
    pvVar1 = GlobalAlloc(0x42,(*(int *)(param_1 + 0x42f) + 1) * 0x208);
    puVar2 = GlobalLock(pvVar1);
    if (puVar2 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    if (*(undefined4 **)(param_1 + 0x42b) == (undefined4 *)0x0) {
      *(undefined4 **)(param_1 + 0x42b) = puVar2;
    }
    else {
      puVar4 = *(undefined4 **)(param_1 + 0x42b);
      puVar5 = puVar2;
      for (iVar3 = (*(int *)(param_1 + 0x42f) * 0x41 & 0x1fffffffU) << 1; iVar3 != 0;
          iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x42b));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x42b));
      GlobalFree(pvVar1);
      *(undefined4 **)(param_1 + 0x42b) = puVar2;
    }
    uVar6 = __alldiv(*(uint *)(param_2 + 4),*(uint *)(param_2 + 8),10000,0);
    puVar2[*(int *)(param_1 + 0x42f) * 0x82] = (int)uVar6;
    lpMultiByteStr = (LPSTR)(puVar2 + *(int *)(param_1 + 0x42f) * 0x82 + 1);
    if ((param_3 == (LPCWSTR)0x0) || (*param_3 != L'\0')) {
      WideCharToMultiByte(0,0,param_3,-1,lpMultiByteStr,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (lpMultiByteStr != (LPSTR)0x0) {
      *lpMultiByteStr = '\0';
    }
    lpMultiByteStr[0x103] = '\0';
    *(int *)(param_1 + 0x42f) = *(int *)(param_1 + 0x42f) + 1;
  }
  return 0;
}


