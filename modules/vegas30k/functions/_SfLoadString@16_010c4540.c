/* Module: vegas30k.dll
   Function: _SfLoadString@16
   Address: 010c4540
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfLoadString_16(undefined4 *param_1,uint param_2,LPSTR param_3,int param_4)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
                    /* 0xc4540  1097  _SfLoadString@16 */
  *param_3 = '\0';
  if (((((HMODULE)param_1[0x4e] != (HMODULE)0x0) && (param_1[0x4d] != 0)) &&
      (hResInfo = FindResourceExA((HMODULE)param_1[0x4e],&DAT_00000006,
                                  (LPCSTR)((param_2 >> 4) + 1 & 0xffff),*(WORD *)(param_1 + 0x4f)),
      hResInfo != (HRSRC)0x0)) &&
     ((hResData = LoadResource((HMODULE)param_1[0x4e],hResInfo), hResData != (HGLOBAL)0x0 &&
      (puVar1 = LockResource(hResData), puVar1 != (ushort *)0x0)))) {
    for (uVar2 = param_2 & 0xf; uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar1 = puVar1 + *puVar1 + 1;
    }
    iVar3 = WideCharToMultiByte(0,0x200,(LPCWSTR)(puVar1 + 1),(uint)*puVar1,param_3,param_4,
                                (LPCSTR)0x0,(LPBOOL)0x0);
    if (0 < iVar3) {
      param_3[iVar3] = '\0';
    }
    if (puVar1 != (ushort *)0x0) goto LAB_010c4609;
  }
  iVar3 = LoadStringA((HINSTANCE)*param_1,param_2,param_3,param_4);
LAB_010c4609:
  if (iVar3 != 0) {
    iVar4 = FUN_010c3da0(param_3,param_4,&DAT_011e2b98,3);
    iVar3 = iVar3 - iVar4;
  }
  return iVar3;
}


