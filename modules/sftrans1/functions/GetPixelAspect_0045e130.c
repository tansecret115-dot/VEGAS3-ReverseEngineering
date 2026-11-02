/* Module: sftrans1.dll
   Function: GetPixelAspect
   Address: 0045e130
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: double __thiscall CSfSurface::GetPixelAspect(void) */

double __thiscall CSfSurface::GetPixelAspect(CSfSurface *this)

{
                    /* 0x5e130  15  ?GetPixelAspect@CSfSurface@@QAENXZ */
  return *(double *)(this + 0x440);
}


