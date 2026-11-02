/* Module: rmme3260.dll
   Function: FUN_66206780
   Address: 66206780
   Source: Ghidra pseudocode (Stage 10 batch) */


char __thiscall FUN_66206780(void *this,int param_1,byte param_2)

{
  int iVar1;
  char cVar2;
  char *local_10 [3];
  
  cVar2 = '\0';
  FUN_66218240(this,local_10);
  iVar1 = _stricmp(s_video_x_pn_realvideo_6626f114,local_10[0]);
  if (iVar1 == 0) {
    if (param_1 == *(int *)((int)this + 0x56)) goto LAB_66206803;
    if ((param_2 & 2) == 0) {
      cVar2 = (*(int *)((int)this + 0x52) != 0) + '\x02';
      goto LAB_66206803;
    }
  }
  else {
    iVar1 = _stricmp(s_audio_x_pn_realaudio_6626f0fc,local_10[0]);
    if (iVar1 != 0) {
      iVar1 = _stricmp(s_application_x_pn_realevent_6626f0e0,local_10[0]);
      if (iVar1 != 0) {
        iVar1 = _stricmp(s_application_x_pn_imagemap_6626f0c4,local_10[0]);
        if (iVar1 != 0) goto LAB_66206803;
      }
    }
  }
  cVar2 = '\x03';
LAB_66206803:
  FUN_66250210((int *)local_10);
  return cVar2;
}


