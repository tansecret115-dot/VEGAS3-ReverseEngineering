/* Module: mp3plug.dll
   Function: FUN_5f727d70
   Address: 5f727d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f727d70(uint param_1,undefined4 *param_2,uchar *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  LSTATUS LVar3;
  undefined4 uVar4;
  HKEY local_20c;
  uchar local_208 [260];
  uchar local_104 [260];
  
  uVar4 = 0x80070005;
  uVar2 = FUN_5f727260();
  FUN_5f727ce0(param_1,uVar2,(LPSTR)local_208,0x104);
  FUN_5f727ce0(param_1,0xf7c0ef08,(LPSTR)local_104,0x104);
  bVar1 = FUN_5f726b60((HKEY)0x80000000,(LPCSTR)local_104,(HKEY)0x80000000,(LPCSTR)local_208);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_5f726870((HKEY)0x80000000,(LPCSTR)local_104);
    LVar3 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_208,0,0x2001f,&local_20c);
    if (LVar3 == 0) {
      _mbscpy(param_3,local_208);
      uVar4 = 0;
      *param_2 = local_20c;
    }
    return uVar4;
  }
  LVar3 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_208,0,0x2001f,&local_20c);
  if (LVar3 == 0) {
    *param_2 = local_20c;
    _mbscpy(param_3,local_104);
    return 0;
  }
  return 0x80070005;
}


