/* Module: vidpcore.dll
   Function: FUN_5df13af0
   Address: 5df13af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df13af0(undefined4 param_1,undefined4 *param_2)

{
  LSTATUS LVar1;
  HKEY local_108;
  CHAR local_104 [260];
  
  FUN_5df132e0(param_1,0xf7c0ef08,local_104,0x104);
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000000,local_104,0,0x2001f,&local_108);
  if (LVar1 == 0) {
    *param_2 = local_108;
    return 0;
  }
  return 0x80070005;
}


