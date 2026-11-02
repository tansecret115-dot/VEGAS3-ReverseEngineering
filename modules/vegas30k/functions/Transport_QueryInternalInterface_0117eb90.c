/* Module: vegas30k.dll
   Function: Transport_QueryInternalInterface
   Address: 0117eb90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_QueryInternalInterface(struct _GUID const &,void * *) */

long Transport_QueryInternalInterface(_GUID *param_1,void **param_2)

{
  long lVar1;
  
                    /* 0x17eb90  558  ?Transport_QueryInternalInterface@@YGJABU_GUID@@PAPAX@Z */
  if (DAT_012b0b2c == (int *)0x0) {
    return -0x7fff0001;
  }
  lVar1 = (**(code **)(*DAT_012b0b2c + 0xc))(DAT_012b0b2c,param_1,param_2);
  if (lVar1 < 0) {
    lVar1 = (**(code **)*DAT_012b0b2c)(DAT_012b0b2c,param_1,param_2);
  }
  return lVar1;
}


