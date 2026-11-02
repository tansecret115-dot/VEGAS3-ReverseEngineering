/* Module: wmfplug2.dll
   Function: FUN_0041db80
   Address: 0041db80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041db80(HKEY param_1,LPSTR param_2,byte param_3)

{
  LPSTR pCVar1;
  HKEY pHVar2;
  byte bVar3;
  int iVar4;
  int local_4;
  
  pHVar2 = param_1;
  iVar4 = FUN_0041d760(param_1,"UseVideo",(LPBYTE)&local_4);
  bVar3 = param_3;
  pCVar1 = param_2;
  *(uint *)(param_2 + 0x104) = (uint)(local_4 != 0);
  if ((param_3 & 1) != 0) {
    iVar4 = FUN_0041dc40(pHVar2,param_2,0x104);
  }
  if ((bVar3 & 2) != 0) {
    param_1 = *(HKEY *)(pCVar1 + 0x114);
    iVar4 = FUN_0041dd20(pHVar2,*(LPSTR *)(pCVar1 + 0x110),(DWORD *)&param_1);
    if (iVar4 < 0) {
      pCVar1[0x114] = '\0';
      pCVar1[0x115] = '\0';
      pCVar1[0x116] = '\0';
      pCVar1[0x117] = '\0';
    }
    else if (*(int *)(pCVar1 + 0x110) == 0) {
      *(undefined1 **)(pCVar1 + 0x114) = (undefined1 *)((int)&param_1->unused + 1);
    }
  }
  if (((bVar3 & 4) != 0) && (-1 < iVar4)) {
    if (*(undefined1 **)(pCVar1 + 0x118) != (undefined1 *)0x0) {
      **(undefined1 **)(pCVar1 + 0x118) = 0;
      return 0;
    }
    pCVar1[0x11c] = '\0';
    pCVar1[0x11d] = '\0';
    pCVar1[0x11e] = '\0';
    pCVar1[0x11f] = '\0';
  }
  return 0;
}


