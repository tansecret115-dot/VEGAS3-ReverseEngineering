/* Module: pngu3266.dll
   Function: StretchBlit
   Address: 605fb724
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::StretchBlit(class CPNImage
   *,long,long,long,long,long,long,long,long,long) */

void __thiscall
CPNDC::StretchBlit(CPNDC *this,CPNImage *param_1,long param_2,long param_3,long param_4,long param_5
                  ,long param_6,long param_7,long param_8,long param_9,long param_10)

{
  DWORD rop;
  HDC hdc;
  int iVar1;
  HGDIOBJ h;
  
                    /* 0xb724  2082  ?StretchBlit@CPNDC@@UAEXPAVCPNImage@@JJJJJJJJJ@Z */
  if (param_1 != (CPNImage *)0x0) {
    rop = TranslateBlitRopCodes(this,param_10);
    hdc = CreateCompatibleDC(*(HDC *)(this + 0x1cf));
    iVar1 = (**(code **)(*(int *)param_1 + 0x18))();
    if ((iVar1 == 0) && (iVar1 = (**(code **)(*(int *)param_1 + 0x10))(this), iVar1 == 0)) {
      return;
    }
    h = SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x14));
    StretchBlt(*(HDC *)(this + 0x1cf),param_2,param_3,param_4,param_5,hdc,param_6,param_7,param_8,
               param_9,rop);
    SelectObject(hdc,h);
    DeleteDC(hdc);
  }
  return;
}


