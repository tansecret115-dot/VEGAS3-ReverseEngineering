/* Module: wmfplug2.dll
   Function: FUN_004191a0
   Address: 004191a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004191a0(int *param_1,int param_2,int *param_3,undefined4 param_4,LPCSTR param_5,
                LPCSTR param_6,LPCSTR param_7)

{
  LPSTR pCVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*param_3 < param_2 + 1) {
    pvVar2 = GlobalAlloc(0x42,(param_2 + 10) * 0x328);
    puVar3 = GlobalLock(pvVar2);
    if (puVar3 == (undefined4 *)0x0) {
      return param_2;
    }
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)*param_1;
      puVar6 = puVar3;
      for (iVar4 = (param_2 * 0x65 & 0x1fffffffU) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      pvVar2 = GlobalHandle((LPCVOID)*param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)*param_1);
      GlobalFree(pvVar2);
    }
    *param_1 = (int)puVar3;
    *param_3 = param_2 + 10;
  }
  iVar4 = param_2 * 0x328;
  *(undefined4 *)(*param_1 + iVar4) = param_4;
  pCVar1 = (LPSTR)(*param_1 + 4 + iVar4);
  lstrcpynA(pCVar1,param_5,0x20);
  pCVar1[0x1f] = '\0';
  pCVar1 = (LPSTR)(*param_1 + 0x24 + iVar4);
  lstrcpynA(pCVar1,param_6,0x203);
  pCVar1[0x202] = '\0';
  pCVar1 = (LPSTR)(*param_1 + 0x227 + iVar4);
  lstrcpynA(pCVar1,param_7,0xff);
  pCVar1[0xfe] = '\0';
  return param_2 + 1;
}


