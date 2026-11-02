/* Module: sctplug.dll
   Function: FUN_00414bc0
   Address: 00414bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00414bc0(uint *param_1,uint *param_2)

{
  uint uVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  int iVar4;
  uchar *_Dest;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar5 = 0;
  uVar1 = *param_2;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (uVar1 != 0) {
    pvVar2 = GlobalAlloc(0x42,uVar1 << 3);
    puVar3 = GlobalLock(pvVar2);
    if (puVar3 == (undefined4 *)0x0) {
      *param_1 = 0;
      return 0x8007000e;
    }
    param_1[1] = (uint)puVar3;
    puVar6 = (undefined4 *)param_2[1];
    if (*param_2 != 0) {
      do {
        *puVar3 = *puVar6;
        if ((LPCSTR)puVar6[1] != (LPCSTR)0x0) {
          iVar4 = lstrlenA((LPCSTR)puVar6[1]);
          pvVar2 = GlobalAlloc(0x42,iVar4 + 1);
          _Dest = GlobalLock(pvVar2);
          puVar3[1] = _Dest;
          if (_Dest == (uchar *)0x0) {
            FUN_00414b00(param_1);
            return 0x8007000e;
          }
          _mbscpy(_Dest,(uchar *)puVar6[1]);
        }
        puVar6 = puVar6 + 2;
        puVar3 = puVar3 + 2;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *param_2);
    }
  }
  return 0;
}


