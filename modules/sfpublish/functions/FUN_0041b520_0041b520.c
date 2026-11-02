/* Module: sfpublish.dll
   Function: FUN_0041b520
   Address: 0041b520
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041b520(undefined4 *param_1,uint param_2,LPSTR param_3,SIZE_T param_4)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  *param_3 = '\0';
  if (((((HMODULE)param_1[0x4e] != (HMODULE)0x0) && (param_1[0x4d] != 0)) &&
      (hResInfo = FindResourceExA((HMODULE)param_1[0x4e],(LPCSTR)0x6,
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
    if (puVar1 != (ushort *)0x0) goto LAB_0041b5e9;
  }
  iVar3 = LoadStringA((HINSTANCE)*param_1,param_2,param_3,param_4);
LAB_0041b5e9:
  if (iVar3 != 0) {
    iVar4 = FUN_0041ad80(param_3,param_4,"^*",3);
    iVar3 = iVar3 - iVar4;
  }
  return iVar3;
}


