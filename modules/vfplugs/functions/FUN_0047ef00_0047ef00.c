/* Module: vfplugs.dll
   Function: FUN_0047ef00
   Address: 0047ef00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047ef00(undefined4 *param_1,LPSTR param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  CHAR local_28 [40];
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  wsprintfA(local_28,"%08x-%04x-%04x-%04x-%02x%02x%02x%02x%02x%02x",*param_1,param_1[1] & 0xffff,
            (uint)param_1[1] >> 0x10,(uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff,uVar1 >> 0x10 & 0xff,
            uVar1 >> 0x18,uVar2 & 0xff,uVar2 >> 8 & 0xff,uVar2 >> 0x10 & 0xff,uVar2 >> 0x18);
  lstrcpynA(param_2,local_28,param_3);
  param_2[param_3 + -1] = '\0';
  return 0;
}


