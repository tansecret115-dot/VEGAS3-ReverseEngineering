/* Module: pngu3266.dll
   Function: SaveToFile
   Address: 605f4bf1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNBitmapImage::SaveToFile(class CRaDataFile *) */

int __thiscall CPNBitmapImage::SaveToFile(CPNBitmapImage *this,CRaDataFile *param_1)

{
  int iVar1;
  undefined2 local_14;
  int local_12;
  undefined2 local_e;
  undefined2 local_c;
  int local_a;
  
                    /* 0x4bf1  1793  ?SaveToFile@CPNBitmapImage@@IAEHPAVCRaDataFile@@@Z */
  if ((((*(int *)(this + 0x2f) == 0) && (*(int *)(this + 0x2b) == 0)) &&
      (*(int *)(this + 0x14) != 0)) && (iVar1 = (**(code **)(*(int *)this + 0x14))(), iVar1 == 0)) {
    return 0;
  }
  iVar1 = *(int *)(this + 0x2b);
  local_14 = 0x4d42;
  local_e = 0;
  local_c = 0;
  local_12 = *(int *)(iVar1 + 0x14) + 0x36 + *(int *)(iVar1 + 0x20) * 4;
  local_a = *(int *)(iVar1 + 0x20) * 4 + 0x36;
  (**(code **)(*(int *)param_1 + 0x30))(&local_14,0xe);
  (**(code **)(*(int *)param_1 + 0x30))(*(undefined4 *)(this + 0x2b),0x28);
  (**(code **)(*(int *)param_1 + 0x30))
            (*(int *)(this + 0x2b) + 0x28,*(int *)(*(int *)(this + 0x2b) + 0x20) << 2);
  (**(code **)(*(int *)param_1 + 0x30))
            (*(undefined4 *)(this + 0x2f),*(undefined4 *)(*(int *)(this + 0x2b) + 0x14));
  return 1;
}


