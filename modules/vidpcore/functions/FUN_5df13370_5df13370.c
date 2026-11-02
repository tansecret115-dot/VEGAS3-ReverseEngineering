/* Module: vidpcore.dll
   Function: FUN_5df13370
   Address: 5df13370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df13370(undefined4 param_1,undefined4 *param_2,uchar *param_3)

{
  undefined4 uVar1;
  int iVar2;
  LSTATUS LVar3;
  undefined4 uVar4;
  HKEY local_20c;
  uchar local_208 [260];
  uchar local_104 [260];
  
  uVar4 = 0x80070005;
  uVar1 = FUN_5df12530(1);
  FUN_5df132e0(param_1,uVar1,local_208,0x104);
  FUN_5df132e0(param_1,0xf7c0ef08,local_104,0x104);
  iVar2 = FUN_5df11e30(0x80000000,local_104,0x80000000,local_208);
  if (iVar2 != 0) {
    FUN_5df11b40(0x80000000,local_104);
    LVar3 = RegOpenKeyExA((HKEY)&DAT_80000000,(LPCSTR)local_208,0,0x2001f,&local_20c);
    if (LVar3 == 0) {
      _mbscpy(param_3,local_208);
      uVar4 = 0;
      *param_2 = local_20c;
    }
    return uVar4;
  }
  LVar3 = RegOpenKeyExA((HKEY)&DAT_80000000,(LPCSTR)local_208,0,0x2001f,&local_20c);
  if (LVar3 == 0) {
    *param_2 = local_20c;
    _mbscpy(param_3,local_104);
    return 0;
  }
  return 0x80070005;
}


