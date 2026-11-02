/* Module: vegas30k.dll
   Function: Transport_Init
   Address: 0117ea40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall Transport_Init(long (__stdcall*)(struct ISFTransport *,unsigned int,unsigned long
   *,unsigned long,__int64 *,long),unsigned long,unsigned long,unsigned long,struct HSFMETRIC__ *)
    */

long Transport_Init(_func_long_ISFTransport_ptr_uint_ulong_ptr_ulong___int64_ptr_long *param_1,
                   ulong param_2,ulong param_3,ulong param_4,HSFMETRIC__ *param_5)

{
  int iVar1;
  undefined4 local_4;
  
                    /* 0x17ea40  549
                       ?Transport_Init@@YGJP6GJPAUISFTransport@@IPAKKPA_JJ@ZKKKPAUHSFMETRIC__@@@Z */
  DAT_012b0b28 = 0xffffffff;
  iVar1 = FUN_01178670(0,&DAT_011d9d80,&DAT_012b0b2c,0);
  if (-1 < iVar1) {
    local_4 = 4;
    if (DAT_012b0b2c != (int *)0x0) {
      iVar1 = (**(code **)(*DAT_012b0b2c + 0x18))
                        (DAT_012b0b2c,&local_4,0x14,param_3,param_4,&LAB_01192780,&DAT_012b0b20);
      if (iVar1 < 0) {
        (**(code **)(*DAT_012b0b2c + 8))(DAT_012b0b2c);
        DAT_012b0b2c = (int *)0x0;
        return iVar1;
      }
      _DAT_012b0b20 = param_3;
      _DAT_012b0b24 = param_5;
      DAT_012b0b30 = param_1;
      DAT_012b0b34 = param_2;
      Mixer_Init(param_4,param_5);
    }
    (**(code **)(*DAT_012b0b2c + 0x30))(DAT_012b0b2c,1);
  }
  return iVar1;
}


