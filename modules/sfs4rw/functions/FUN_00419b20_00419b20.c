/* Module: sfs4rw.dll
   Function: FUN_00419b20
   Address: 00419b20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00419b20(uint param_1,uint *param_2)

{
  LSTATUS LVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  HKEY local_11c;
  HKEY local_118;
  HKEY local_114;
  DWORD local_110;
  uint local_10c;
  DWORD local_108;
  CHAR local_104 [260];
  
  iVar4 = -0x7fffbffb;
  FUN_00419990(param_1,local_104,0x104);
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,local_104,0,0x20019,&local_11c);
  if (LVar1 == 0) {
    iVar2 = FUN_0041a930(local_11c);
    if (iVar2 != 0) {
      iVar2 = FUN_0041a4b0(local_11c,&local_114);
      if (-1 < iVar2) {
        iVar4 = FUN_0041a500(local_114,0x49652c,&local_118);
        if (-1 < iVar4) {
          local_110 = 4;
          uVar3 = FUN_0041a600(local_118,"D2",&local_108,(byte *)&local_10c,&local_110);
          RegCloseKey(local_118);
          if ((uVar3 == 0) && (local_108 == 4)) {
            *param_2 = local_10c ^ (param_1 << 0x10 | param_1);
            iVar4 = 0;
          }
          else {
            iVar4 = -0x7fffbffb;
          }
        }
        RegCloseKey(local_114);
      }
    }
    RegCloseKey(local_11c);
    return iVar4;
  }
  return -0x7fffbffb;
}


