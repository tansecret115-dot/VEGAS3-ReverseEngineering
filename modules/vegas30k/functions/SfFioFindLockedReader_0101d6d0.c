/* Module: vegas30k.dll
   Function: SfFioFindLockedReader
   Address: 0101d6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfFioFindLockedReader(char const *,struct ISfFileIOManager *,struct
   ISfReadFileClass * *) */

long SfFioFindLockedReader(char *param_1,ISfFileIOManager *param_2,ISfReadFileClass **param_3)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_214;
  undefined4 local_20c [127];
  undefined2 uStack_e;
  LPCSTR pCStack_8;
  
                    /* 0x1d6d0  395
                       ?SfFioFindLockedReader@@YGJPBDPAUISfFileIOManager@@PAPAUISfReadFileClass@@@Z
                        */
  puStack_214 = (undefined1 *)local_20c;
  *param_3 = (ISfReadFileClass *)0x0;
  local_20c[0] = 0;
  lVar1 = (*(code *)**(undefined4 **)param_2)(param_2);
  if (-1 < lVar1) {
    MultiByteToWideChar(0,1,pCStack_8,-1,(LPWSTR)&puStack_214,0x104);
    ppuVar2 = &puStack_214;
    uStack_e = 0;
    lVar1 = (**(code **)(DAT_011da0b0 + 0x10))(&DAT_011da0b0,ppuVar2,param_3);
    (**(code **)(*ppuVar2 + 8))(ppuVar2);
  }
  return lVar1;
}


