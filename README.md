hello skiddiee
hello skiddiee
hello skiddiee
hello skiddiee
hello skiddiee
hello skiddiee
hello skiddiee
hello skiddiee
hello skiddiee
hello skiddiee
hello skiddiee
hello skiddiee
hello skiddiee
// src/components/Hero.jsx
import { Link } from "react-router-dom";

export default function Hero() {
  return (
    <section className="bg-slate-50">
      <div className="max-w-6xl mx-auto px-4 sm:px-6 lg:px-8 py-10 sm:py-14 md:py-20">
        <div className="grid md:grid-cols-2 gap-10 md:gap-12 items-start md:items-center">
          
          {/* LEFT CONTENT */}
          <div>
            <p className="text-[11px] sm:text-sm font-semibold tracking-[0.28em] text-blue-500 mb-3">
              BUSINESS LOANS • INSURANCE • CAPITAL
            </p>

            <h1 className="text-[30px] sm:text-[34px] md:text-5xl font-semibold text-slate-900 leading-[1.15] mb-4">
              Delhi&apos;s trusted partner for{" "}
              <span className="text-blue-600">business loans</span> &{" "}
              <span className="text-blue-600">insurance solutions</span>.
            </h1>

            <p className="text-slate-600 text-sm sm:text-base max-w-xl mb-6">
              Secure the right funding and financial protection — quickly,
              transparently, and with expert guidance tailored to your business.
            </p>

            {/* CTA BUTTONS (Better Mobile Layout) */}
            <div className="grid grid-cols-1 sm:grid-cols-2 gap-3 sm:gap-4 w-full max-w-md">
              {/* Get Quote */}
              <Link to="/quote" className="w-full">
                <button className="w-full px-5 py-3 rounded-full bg-blue-600 text-white font-medium text-sm sm:text-base shadow-md shadow-blue-600/30 hover:bg-blue-700 hover:shadow-lg transition">
                  Get Quote in 10 minutes
                </button>
              </Link>

              {/* Talk to Expert → WhatsApp */}
              <a
                className="w-full"
                href="https://api.whatsapp.com/send?phone=919354216310&text=Hello%2C%20I%20am%20interested%20in%20business%20loan%20or%20insurance.%20Please%20assist."
                target="_blank"
                rel="noopener noreferrer"
              >
                <button className="w-full px-5 py-3 rounded-full border border-slate-300 bg-white text-slate-700 text-sm sm:text-base font-medium hover:border-green-600 hover:text-green-600 transition">
                  Talk to an expert
                </button>
              </a>

              {/* Free Insurance Policy Review */}
              <Link to="/free-policy-review" className="w-full">
                <button className="w-full px-5 py-3 rounded-full bg-slate-900 text-white font-medium text-sm sm:text-base shadow-md shadow-slate-900/20 hover:bg-black transition">
                  Policy Review
                </button>
              </Link>

           
              {/* Book Your Claim */}
              <Link to="/book-claim" className="w-full">
                <button className="w-full px-5 py-3 rounded-full bg-orange-600 text-white font-medium text-sm sm:text-base shadow-md shadow-orange-600/30 hover:bg-orange-700 transition">
                  Book Claim
                </button>
              </Link>
            </div>
          </div>

          {/* RIGHT CARD */}
        <div className="hero-card relative">
          <div className="rounded-3xl bg-gradient-to-br from-blue-600 via-blue-500 to-blue-400 p-[1px] shadow-lg shadow-blue-600/30">
            <div className="rounded-3xl bg-white/95 backdrop-blur-sm p-6 md:p-7 flex flex-col gap-4">

              <div className="text-xs font-semibold uppercase tracking-[0.2em] text-blue-500">
                Sokanathan Advantage
              </div>

              <p className="text-lg md:text-xl font-semibold text-slate-900">
                Smart protection for serious businesses.
              </p>

              <p className="text-sm text-slate-600">
                Compare loan & insurance options from multiple providers with a
                dedicated expert managing all the paperwork.
              </p>

              <ul className="space-y-2 text-sm text-slate-700">
                <li>• Tailored solutions for SMEs & corporates</li>
                <li>• No hidden surprises</li>
                <li>• Fast claim & approval support</li>
              </ul>

              <div className="flex items-center justify-between pt-2">

                <div>
                  <p className="text-xs font-semibold text-slate-500">Clients served</p>
                  <p className="text-xl font-bold text-slate-900">1,500+</p>
                </div>

                <div className="border-x px-4 text-center mx-4">
                  <p className="text-xs font-semibold text-slate-500">Claim served</p>
                  <p className="text-xl font-bold text-slate-900">1000+</p>
                </div>

                <div className="text-right">
                  <p className="text-xs font-semibold text-slate-500">Loans arranged</p>
                  <p className="text-xl font-bold text-slate-900">₹10 Cr+</p>
                </div>
              </div>

            </div>
          </div>
            {/* Glow Lighting */}
            <div className="pointer-events-none absolute -inset-6 -z-10 bg-blue-500/10 blur-3xl rounded-full" />
          </div>
        </div>
      </div>
    </section>
  );
}
