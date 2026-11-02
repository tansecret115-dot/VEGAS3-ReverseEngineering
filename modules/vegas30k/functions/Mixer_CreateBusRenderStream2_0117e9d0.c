/* Module: vegas30k.dll
   Function: Mixer_CreateBusRenderStream2
   Address: 0117e9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_CreateBusRenderStream2(struct ISfReadAudioStream * *,unsigned long,unsigned
   long,__int64,__int64,long (__stdcall*)(struct ISFMixer *,unsigned int,unsigned long,struct
   tWAVEFORMATEX const *,void *,unsigned long,unsigned long,double,__int64,unsigned long,void
   *,unsigned long),struct tWAVEFORMATEX *,unsigned long,__int64) */

long Mixer_CreateBusRenderStream2
               (ISfReadAudioStream **param_1,ulong param_2,ulong param_3,__int64 param_4,
               __int64 param_5,
               _func_long_ISFMixer_ptr_uint_ulong_tWAVEFORMATEX_ptr_void_ptr_ulong_ulong_double___int64_ulong_void_ptr_ulong
               *param_6,tWAVEFORMATEX *param_7,ulong param_8,__int64 param_9)

{
  long lVar1;
  
                    /* 0x17e9d0  156
                       ?Mixer_CreateBusRenderStream2@@YGJPAPAUISfReadAudioStream@@KK_J1P6GJPAUISFMixer@@IKPBUtWAVEFORMATEX@@PAXKKN1K4K@ZPAU3@K1@Z
                        */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x1c8))(DAT_012b09c8,param_1,param_2,param_3);
  return lVar1;
}


