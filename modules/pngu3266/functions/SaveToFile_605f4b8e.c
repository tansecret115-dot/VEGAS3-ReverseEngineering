/* Module: pngu3266.dll
   Function: SaveToFile
   Address: 605f4b8e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNBitmapImage::SaveToFile(char const *) */

int __thiscall CPNBitmapImage::SaveToFile(CPNBitmapImage *this,char *param_1)

{
  CRaDataFile *pCVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x4b8e  1794  ?SaveToFile@CPNBitmapImage@@UAEHPBD@Z */
  iVar3 = 0;
  pCVar1 = (CRaDataFile *)FUN_6061c890(0);
  if (pCVar1 == (CRaDataFile *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int *)pCVar1 + 0x10))(param_1,0x101,0);
    if (iVar2 == 0) {
      iVar3 = SaveToFile(this,pCVar1);
      (**(code **)(*(int *)pCVar1 + 0x18))();
    }
    (*(code *)**(undefined4 **)pCVar1)(1);
    if ((iVar2 == 0) && (iVar3 != 0)) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}


