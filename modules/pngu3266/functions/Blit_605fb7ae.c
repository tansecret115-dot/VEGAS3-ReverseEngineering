/* Module: pngu3266.dll
   Function: Blit
   Address: 605fb7ae
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::Blit(class CPNImage *,long,long,long,long,long,long,long)
    */

void __thiscall
CPNDC::Blit(CPNDC *this,CPNImage *param_1,long param_2,long param_3,long param_4,long param_5,
           long param_6,long param_7,long param_8)

{
  DWORD rop;
  HDC hdc;
  int iVar1;
  HGDIOBJ h;
  
                    /* 0xb7ae  830  ?Blit@CPNDC@@UAEXPAVCPNImage@@JJJJJJJ@Z */
  if (param_1 != (CPNImage *)0x0) {
    rop = TranslateBlitRopCodes(this,param_8);
    hdc = CreateCompatibleDC(*(HDC *)(this + 0x1cf));
    iVar1 = (**(code **)(*(int *)param_1 + 0x18))();
    if ((iVar1 == 0) && (iVar1 = (**(code **)(*(int *)param_1 + 0x10))(this), iVar1 == 0)) {
      return;
    }
    h = SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x14));
    BitBlt(*(HDC *)(this + 0x1cf),param_2,param_3,param_4,param_5,hdc,param_6,param_7,rop);
    SelectObject(hdc,h);
    DeleteDC(hdc);
  }
  return;
}


