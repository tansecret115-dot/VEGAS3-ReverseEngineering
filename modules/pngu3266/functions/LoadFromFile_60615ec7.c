/* Module: pngu3266.dll
   Function: LoadFromFile
   Address: 60615ec7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNGifImage::LoadFromFile(char const *) */

int __thiscall XPNGifImage::LoadFromFile(XPNGifImage *this,char *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  uint uVar5;
  int local_8;
  
                    /* 0x25ec7  1536  ?LoadFromFile@XPNGifImage@@UAEHPBD@Z */
  local_8 = 0;
  piVar1 = FUN_6061c890(0);
  if (piVar1 == (int *)0x0) {
    local_8 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x10))(param_1,0x8000,0);
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*piVar1 + 0x1c))();
      puVar4 = operator_new(uVar3);
      if (puVar4 != (uchar *)0x0) {
        uVar5 = (**(code **)(*piVar1 + 0x28))(puVar4,uVar3);
        if (uVar5 == uVar3) {
          local_8 = UnpackData(this,puVar4,uVar3);
        }
      }
      if (puVar4 != (uchar *)0x0) {
        operator_delete(puVar4);
      }
    }
    if (local_8 != 0) {
      *(undefined4 *)(this + 0x20) = 0;
      *(undefined4 *)(this + 0x1c) = 1;
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(*(int *)(this + 0x2a) + 4);
      *(undefined4 *)(this + 0x10) = *(undefined4 *)(*(int *)(this + 0x2a) + 8);
    }
    (**(code **)(*piVar1 + 0x18))();
    (**(code **)*piVar1)(1);
  }
  return local_8;
}


