/* Module: vegas30k.dll
   Function: Mixer_GetDeviceDisplayName
   Address: 0117e320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetDeviceDisplayName(char *,unsigned long,unsigned long,unsigned long,int)
    */

long Mixer_GetDeviceDisplayName(char *param_1,ulong param_2,ulong param_3,ulong param_4,int param_5)

{
  int iVar1;
  int *unaff_EBX;
  int unaff_ESI;
  char *unaff_EDI;
  undefined4 local_4;
  
                    /* 0x17e320  169  ?Mixer_GetDeviceDisplayName@@YGJPADKKKH@Z */
  local_4 = 0;
  iVar1 = (**(code **)(*DAT_012b09c8 + 0x1e0))(DAT_012b09c8,&local_4,param_3,param_4);
  *unaff_EDI = '\0';
  if (-1 < iVar1) {
    (**(code **)(*(int *)param_3 + 0x20))(param_3,unaff_EDI,unaff_ESI);
    if ((*unaff_EDI == '\0') && (unaff_ESI != 0)) {
      iVar1 = (**(code **)(*unaff_EBX + 0x28))(unaff_EBX,unaff_EDI,unaff_ESI);
    }
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    return iVar1;
  }
  return iVar1;
}


