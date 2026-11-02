/* Module: vegas30k.dll
   Function: Transport_SeekPreview
   Address: 0117f810
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_SeekPreview(__int64,__int64,__int64,__int64,int) */

long Transport_SeekPreview
               (__int64 param_1,__int64 param_2,__int64 param_3,__int64 param_4,int param_5)

{
  long lVar1;
  __int64 local_38 [2];
  __int64 local_28;
  undefined4 local_18;
  int local_14;
  undefined4 local_8;
  
                    /* 0x17f810  562  ?Transport_SeekPreview@@YGJ_J000H@Z */
  local_14 = param_5;
  local_18 = 0xffffffff;
  local_8 = 0;
  local_38[0] = param_3;
  local_28 = param_4;
  lVar1 = (**(code **)(*DAT_012b0b2c + 0x9c))(DAT_012b0b2c,param_1,param_2,local_38);
  return lVar1;
}


