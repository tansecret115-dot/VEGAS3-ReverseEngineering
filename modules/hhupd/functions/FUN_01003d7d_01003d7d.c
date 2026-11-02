/* Module: hhupd.exe
   Function: FUN_01003d7d
   Address: 01003d7d
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_01003d7d(LPCSTR param_1,undefined4 *param_2,uint param_3)

{
  HRSRC pHVar1;
  DWORD DVar2;
  HGLOBAL hResData;
  undefined4 *hResData_00;
  uint uVar3;
  undefined4 *puVar4;
  
  pHVar1 = FindResourceA((HMODULE)0x0,param_1,(LPCSTR)0xa);
  DVar2 = SizeofResource((HMODULE)0x0,pHVar1);
  if ((DVar2 <= param_3) && (param_2 != (undefined4 *)0x0)) {
    if (DVar2 != 0) {
      pHVar1 = FindResourceA((HMODULE)0x0,param_1,(LPCSTR)0xa);
      hResData = LoadResource((HMODULE)0x0,pHVar1);
      hResData_00 = LockResource(hResData);
      if (hResData_00 != (undefined4 *)0x0) {
        puVar4 = hResData_00;
        for (uVar3 = DVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *param_2 = *puVar4;
          puVar4 = puVar4 + 1;
          param_2 = param_2 + 1;
        }
        for (uVar3 = DVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)param_2 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
        FreeResource(hResData_00);
        return DVar2;
      }
    }
    DVar2 = 0;
  }
  return DVar2;
}


