/* Module: pngu3266.dll
   Function: UnpackData
   Address: 606162c9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall XPNGifImage::UnpackData(unsigned char *,unsigned long) */

int __thiscall XPNGifImage::UnpackData(XPNGifImage *this,uchar *param_1,ulong param_2)

{
  uchar *puVar1;
  ulong uVar2;
  long lVar3;
  CGIFImage local_a4 [112];
  uint local_34 [2];
  int local_2c;
  ulong local_1c;
  uchar *local_c;
  XPNGifImage *local_8;
  
                    /* 0x262c9  2103  ?UnpackData@XPNGifImage@@IAEHPAEK@Z */
  puVar1 = param_1;
  local_8 = this;
  FUN_6061ef10((undefined4 *)local_a4);
  local_c = (uchar *)0x0;
  memset(local_34,0,0x28);
  lVar3 = ProcessFileHeader(local_8,&param_1);
  if (lVar3 == 0) {
    FUN_6061f550((ushort *)param_1,local_34);
    param_1 = param_1 + 7;
  }
  if (local_2c != 0) {
    local_c = param_1;
    FUN_6061eff0(local_a4,local_1c,(int)param_1);
    param_1 = param_1 + local_1c * 3;
  }
  uVar2 = param_2;
  if (lVar3 == 0) {
    lVar3 = ProcessImageHeader(local_8,local_a4,&param_1,(ulong)(puVar1 + (param_2 - (int)param_1)))
    ;
  }
  if (lVar3 == 0) {
    lVar3 = ProcessImageData(local_8,local_a4,&param_1,(ulong)(puVar1 + (uVar2 - (int)param_1)));
    if (lVar3 == 0) {
      if (((param_1 < puVar1 + uVar2) && (*param_1 != ';')) && (*param_1 == '!')) {
        *(undefined4 *)(local_8 + 0x433) = 1;
      }
      lVar3 = ConvertGIFToDIB(local_8,local_a4,local_c,local_1c);
    }
  }
  FUN_6061ef90((undefined4 *)local_a4);
  thunk_FUN_6061ef90((undefined4 *)local_a4);
  return (uint)(lVar3 == 0);
}


