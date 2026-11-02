/* Module: vegas30k.dll
   Function: Transport_GenerateSync
   Address: 0117f030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_GenerateSync(int,unsigned long) */

long Transport_GenerateSync(int param_1,ulong param_2)

{
  long lVar1;
  
                    /* 0x17f030  538  ?Transport_GenerateSync@@YGJHK@Z */
  lVar1 = (**(code **)(*DAT_012b0b2c + 0x48))(DAT_012b0b2c,param_1,param_2);
  return lVar1;
}


