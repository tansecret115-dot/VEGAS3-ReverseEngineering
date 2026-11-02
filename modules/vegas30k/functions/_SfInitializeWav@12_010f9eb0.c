/* Module: vegas30k.dll
   Function: _SfInitializeWav@12
   Address: 010f9eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfInitializeWav_12(LPCSTR param_1,short *param_2,DWORD param_3)

{
  int iVar1;
  HANDLE hObject;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  short local_4;
  
                    /* 0xf9eb0  1028  _SfInitializeWav@12 */
  if (param_3 == 3) {
    param_3 = 5;
  }
  else if (param_3 == 4) {
    param_3 = 2;
  }
  if (param_2[8] == 0) {
    local_14 = *(undefined4 *)param_2;
    local_10 = *(undefined4 *)(param_2 + 2);
    local_c = *(undefined4 *)(param_2 + 4);
    local_8 = *(undefined4 *)(param_2 + 6);
    local_4 = param_2[8];
    iVar1 = _SfAudio_FixBadWfx_4(&local_14);
    if (iVar1 == 0) {
      hObject = CreateFileA(param_1,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,param_3,0x80,(HANDLE)0x0
                           );
      if (hObject != (HANDLE)0xffffffff) {
        if ((*param_2 == 3) || (*param_2 == 1)) {
          iVar1 = 0x10;
        }
        else {
          iVar1 = (ushort)param_2[8] + 0x12;
        }
        iVar1 = riff_WriteFileID(hObject,0x45564157,iVar1 + 0x14);
        if (-1 < iVar1) {
          if ((*param_2 == 3) || (*param_2 == 1)) {
            iVar1 = 0x10;
          }
          else {
            iVar1 = (ushort)param_2[8] + 0x12;
          }
          iVar1 = riff_WriteChunk(hObject,0x20746d66,param_2,iVar1,0);
          if (-1 < iVar1) {
            iVar1 = riff_WriteChunkHeader(hObject,0x61746164,0);
          }
        }
        CloseHandle(hObject);
        return iVar1;
      }
      return -0x7ffb1ff9;
    }
  }
  return -0x7ffb2000;
}


