/* Module: vegas30k.dll
   Function: Mixer_GetDeviceName
   Address: 0117e240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetDeviceName(char *,unsigned long,unsigned long,unsigned long) */

long Mixer_GetDeviceName(char *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  int *unaff_ESI;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
                    /* 0x17e240  172  ?Mixer_GetDeviceName@@YGJPADKKK@Z */
  uVar4 = param_3;
  if (param_3 == 0x100) {
    lVar1 = (**(code **)(*DAT_012b09c8 + 0x1ec))(DAT_012b09c8,param_1,param_2,0x100,param_4);
    return lVar1;
  }
  param_3 = 0;
  puVar3 = &param_3;
  uVar5 = param_4;
  iVar2 = (**(code **)(*DAT_012b09c8 + 0x1e0))(DAT_012b09c8,puVar3,uVar4,param_4);
  if (-1 < iVar2) {
    (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,uVar4,uVar5);
    (**(code **)(*puVar3 + 8))(puVar3);
  }
  return iVar2;
}


