/* Module: pngu3266.dll
   Function: GetDataPtr
   Address: 605f529e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNBitmapImage::GetDataPtr(void * *) */

void __thiscall CPNBitmapImage::GetDataPtr(CPNBitmapImage *this,void **param_1)

{
                    /* 0x529e  1178  ?GetDataPtr@CPNBitmapImage@@UAEXPAPAX@Z */
  *param_1 = *(void **)(this + 0x2f);
  return;
}


