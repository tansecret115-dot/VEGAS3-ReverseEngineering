/* Module: sfmarket2.dll
   Function: FUN_00405210
   Address: 00405210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405210(void)

{
  uchar local_208 [260];
  CHAR local_104 [260];
  
  GetTempPathA(0x104,local_104);
  FUN_00424a60(local_208,"%s%s");
  FUN_004203c0(local_208,0x104);
  FUN_004216a0(local_208,(uchar *)0x0,1);
  return;
}


