/* Module: vegas30k.dll
   Function: _FXPackage_GetPackageInfo@20
   Address: 010294c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _FXPackage_GetPackageInfo_20
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 *param_5)

{
  LPBYTE lpData;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  HKEY local_8;
  DWORD local_4;
  
                    /* 0x294c0  641  _FXPackage_GetPackageInfo@20 */
  puVar1 = param_5;
  if (param_5 != (undefined4 *)0x0) {
    iVar2 = 4;
    bVar5 = true;
    piVar3 = &DAT_011dab90;
    piVar4 = (int *)register0x00000010;
    do {
      piVar4 = piVar4 + 1;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
    } while (bVar5);
    if (!bVar5) {
      local_8 = (HKEY)0x0;
      iVar2 = _FXPackage_OpenPackageRegKey_24(param_1,param_2,param_3,param_4,&local_8,0);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_5 = (undefined4 *)0x104;
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
      RegQueryValueExA(local_8,"Name",(LPDWORD)0x0,&local_4,(LPBYTE)(puVar1 + 4),(LPDWORD)&param_5);
      param_5 = (undefined4 *)0x4;
      RegQueryValueExA(local_8,"Type",(LPDWORD)0x0,&local_4,(LPBYTE)(puVar1 + 0x45),
                       (LPDWORD)&param_5);
      lpData = (LPBYTE)(puVar1 + 0x46);
      lpData[0] = '\0';
      lpData[1] = '\0';
      lpData[2] = '\0';
      lpData[3] = '\0';
      param_5 = (undefined4 *)0x4;
      RegQueryValueExA(local_8,"Flags",(LPDWORD)0x0,&local_4,lpData,(LPDWORD)&param_5);
      RegCloseKey(local_8);
      return 0;
    }
  }
  return -0x7fffbffb;
}


