/* Module: pngu3266.dll
   Function: LoadFromFile
   Address: 605f4976
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNBitmapImage::LoadFromFile(class CRaDataFile *) */

int __thiscall CPNBitmapImage::LoadFromFile(CPNBitmapImage *this,CRaDataFile *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int local_40;
  int local_3c;
  int local_38;
  uint local_32;
  int local_2c;
  int local_20;
  short local_18 [5];
  int local_e;
  int local_8;
  
                    /* 0x4976  1534  ?LoadFromFile@CPNBitmapImage@@IAEHPAVCRaDataFile@@@Z */
  local_8 = 0;
  (**(code **)(*(int *)this + 0x58))();
  uVar1 = (**(code **)(*(int *)param_1 + 0x24))();
  iVar2 = (**(code **)(*(int *)param_1 + 0x28))(local_18,0xe);
  if (iVar2 != 0xe) {
    local_8 = 1;
  }
  if (local_8 == 0) {
    if (local_18[0] != 0x4d42) {
      local_8 = 1;
    }
    if ((local_8 == 0) &&
       (iVar2 = (**(code **)(*(int *)param_1 + 0x28))(&local_40,0x28), iVar2 != 0x28)) {
      local_8 = 1;
    }
  }
  iVar2 = 0;
  if (local_8 == 0) {
    if ((local_20 == 0) && ((short)local_32 != 0x18)) {
      local_20 = 1 << ((byte)local_32 & 0x1f);
    }
    iVar2 = local_20;
    if (local_2c == 0) {
      local_2c = (local_3c * (local_32 & 0xffff) + 0x1f >> 3 & 0x1ffffffc) * local_38;
    }
  }
  if (local_8 == 0) {
    _Dst = operator_new(local_40 + iVar2 * 4 + local_2c);
    *(void **)(this + 0x2b) = _Dst;
    if (_Dst == (void *)0x0) {
      local_8 = 2;
    }
    if (local_8 == 0) {
      memcpy(_Dst,&local_40,0x28);
      goto LAB_605f4a5c;
    }
  }
  else {
LAB_605f4a5c:
    if (((local_8 == 0) && ((short)local_32 != 0x18)) &&
       (iVar3 = (**(code **)(*(int *)param_1 + 0x28))(*(int *)(this + 0x2b) + local_40,iVar2 << 2),
       iVar2 << 2 != iVar3)) {
      local_8 = 1;
    }
  }
  if (local_8 == 0) {
    if (local_e != 0) {
      (**(code **)(*(int *)param_1 + 0x20))(uVar1,0);
      (**(code **)(*(int *)param_1 + 0x20))(local_e,1);
    }
    iVar3 = (**(code **)(*(int *)param_1 + 0x28))
                      (local_40 + *(int *)(this + 0x2b) + iVar2 * 4,local_2c);
    if (iVar3 != local_2c) {
      local_8 = 1;
    }
    *(int *)(this + 0x2f) = local_40 + *(int *)(this + 0x2b) + iVar2 * 4;
    *(int *)(this + 0xc) = local_3c;
    *(int *)(this + 0x10) = local_38;
  }
  if (local_8 != 0) {
    if (*(void **)(this + 0x2b) != (void *)0x0) {
      operator_delete(*(void **)(this + 0x2b));
    }
    *(undefined4 *)(this + 0x2b) = 0;
    if (local_8 != 0) {
      *(undefined4 *)(this + 0x1c) = 0;
      goto LAB_605f4b17;
    }
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 1;
LAB_605f4b17:
  return (uint)(local_8 == 0);
}


